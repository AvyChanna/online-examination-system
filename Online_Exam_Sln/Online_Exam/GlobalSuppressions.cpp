// This file is used by Code Analysis to maintain 
// CA_GLOBAL_SUPPRESS_MESSAGE macros that are applied to this project.
// Project-level suppressions either have no target or are given 
// a specific target and scoped to a namespace, type, member, etc.
//
// To add a suppression to this file, right-click the message in the 
// Code Analysis results, point to "Suppress Message", and click 
// "In Suppression File".
// You do not need to add suppressions to this file manually.

CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="DBCon", Scope="member", Target="Database.OES.#Dispose(System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="DBDT", Scope="member", Target="Database.OES.#Dispose(System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="DBDA", Scope="member", Target="Database.OES.#Dispose(System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="DBCmd", Scope="member", Target="Database.OES.#Dispose(System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Security", "CA2100:Review SQL queries for security vulnerabilities", Scope="member", Target="Database.OES.#ExecQuery(System.String)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="Access", Scope="member", Target="Online_Exam.StudentEditAdmin.#Dispose(System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId="Access", Scope="member", Target="Online_Exam.ApproveProf.#Dispose(System.Boolean)");
