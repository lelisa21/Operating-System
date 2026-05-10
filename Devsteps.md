
## Development Steps

### STEP 1 — Setup Project
All members:
```bash
git clone <repo-link>
```

Create branch:
```bash
git checkout -b your-branch-name
```
### STEP 2 — Implement Modules
Each member independently codes their assigned files.
Use:

```bash
make fcfs
make sjf
make srtf
```

to test your module.
### STEP 3 — Commit Changes

```bash
git add .
git commit -m "Implemented FCFS scheduling"
```

Push:
```bash
git push origin fcfs-feature
```
### STEP 4 — Merge

After testing:
- create Pull Request
- merge into main branch

## Build Instructions

### Compile Full Project

```bash
make
```

### Run Program

Linux/Mac:

```bash
./scheduler
```

Windows:

```bash
scheduler.exe
```
### Compile Individual Modules

```bash
make fcfs
make sjf
```

