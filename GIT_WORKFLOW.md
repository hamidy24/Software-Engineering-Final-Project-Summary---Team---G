# Version Control Strategy

## Branching Model (GitFlow)
* `main`: Production-ready code only.
* `develop`: Integration branch for features.
* `feature/<ticket-id>-<short-desc>`: Individual task development (e.g., `feature/T-08-cpp-sandbox`).

## Commit Conventions
* `feat:` A new feature.
* `fix:` A bug fix.
* `docs:` Documentation only changes.
* `refactor:` Code change that neither fixes a bug nor adds a feature.

All pull requests must pass automated unit tests (including sandbox constraint checks) before merging into `develop`.
