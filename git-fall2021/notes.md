# Example Project Notes
- `git init`, `git add greet.cpp`, `git commit`
- `git log`

## Branch 1
- `git branch cat`, `git checkout cat`
- edit file...
- `git status`, `git add greet.cpp`, `git commit`
- original is unchanged, `git checkout master`

## Branch 2
- `git branch dog`, `git checkout dog`
- edit file...
- `git status`, `git add greet.cpp`, `git commit`
- whole picture, `git checkout master`, `git log --all --graph --decorate`

## Merging
- combing both branches' features
- `git merge cat`, no problems
- `git merge dog`, merge conflict! edit manually
- `git status`, `git add greet.cpp`, `git commit`
- whole picture, `git checkout master`, `git log --all --graph --decorate`
