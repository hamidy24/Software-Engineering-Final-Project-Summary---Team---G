# Testing & Quality Assurance

## Unit Testing (Backend)
- **TC-01 (Authentication):** Verify JWT expiration handling and role mismatch rejections.
- **TC-02 (Lexical Constraints):** Feed the sandbox code utilizing `<cctype>`. The system *must* throw an academic constraint violation error.
- **TC-03 (State Capture):** Verify the `student.cpp` correctly outputs `STATE_CAPTURE` strings formatted exactly as `COMPARE|indexA|indexB`.

## Integration Testing
- **TC-04 (Visualization Sync):** Verify that a `SWAP` output from the backend correctly swaps the spatial coordinates of two SVG/Canvas elements on the frontend without visual tearing.

## Load Testing
- **TC-05 (Concurrent Compilation):** Simulate 50 concurrent code submission requests to ensure the Docker sandboxing queues appropriately without CPU starvation.
