# System Architecture & Design

## 1. High-Level Architecture
The system operates on a microservice-inspired monolithic architecture:
* **Presentation Layer:** React.js / HTML5 Canvas / SVG Elements.
* **API Gateway:** Node.js / Express handling routing and WebSocket connections.
* **Execution Sandbox:** A containerized C++ environment (`g++`) isolated via Docker.
* **Database:** PostgreSQL for relational integrity (Users, Progress, Modules).

## 2. Database Schema Details (Moderation)
* `Users` (user_id PK, role Enum)
* `Algorithm_Submissions` (submission_id PK, contributor_id FK, status Enum)
* `Moderation_Logs` (log_id PK, admin_id FK, feedback TEXT)

## 3. Communication Protocols
* **REST API:** Standard CRUD operations (Port 443).
* **WebSockets:** Real-time state synchronization for Task 16 (Live Demonstrations).
