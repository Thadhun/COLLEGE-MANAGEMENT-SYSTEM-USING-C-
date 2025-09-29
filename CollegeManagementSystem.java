import java.sql.*;
import java.util.*;

public class CollegeManagementSystem {
    private Scanner scanner = new Scanner(System.in);

    public void start() {
        while (true) {
            System.out.println("\n=== College Management System ===");
            System.out.println("1. Add Student");
            System.out.println("2. View Students");
            System.out.println("3. Add Course");
            System.out.println("4. View Courses");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1 -> addStudent();
                case 2 -> viewStudents();
                case 3 -> addCourse();
                case 4 -> viewCourses();
                case 5 -> {
                    System.out.println("Exiting... Goodbye!");
                    return;
                }
                default -> System.out.println("Invalid choice. Try again.");
            }
        }
    }

    private void addStudent() {
        try (Connection conn = DatabaseConnection.getConnection()) {
            System.out.print("Enter student name: ");
            scanner.nextLine(); // consume leftover newline
            String name = scanner.nextLine();

            System.out.print("Enter student age: ");
            int age = scanner.nextInt();

            String query = "INSERT INTO students (name, age) VALUES (?, ?)";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setString(1, name);
            stmt.setInt(2, age);
            stmt.executeUpdate();

            System.out.println("✅ Student added successfully!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void viewStudents() {
        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "SELECT * FROM students";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(query);

            System.out.println("\n--- Student List ---");
            while (rs.next()) {
                System.out.println("ID: " + rs.getInt("id") +
                        ", Name: " + rs.getString("name") +
                        ", Age: " + rs.getInt("age"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void addCourse() {
        try (Connection conn = DatabaseConnection.getConnection()) {
            System.out.print("Enter course name: ");
            scanner.nextLine(); // consume leftover newline
            String courseName = scanner.nextLine();

            String query = "INSERT INTO courses (course_name) VALUES (?)";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setString(1, courseName);
            stmt.executeUpdate();

            System.out.println("✅ Course added successfully!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void viewCourses() {
        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "SELECT * FROM courses";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(query);

            System.out.println("\n--- Course List ---");
            while (rs.next()) {
                System.out.println("ID: " + rs.getInt("id") +
                        ", Name: " + rs.getString("course_name"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

