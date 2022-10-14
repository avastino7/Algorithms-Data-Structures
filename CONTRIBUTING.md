
# Contribution Rules📚:

- You are not allowed to make pull requests that break the rules.
- Do NOT add any build steps 
- Do NOT remove other's content.
- Styling/code can be pretty, ugly or stupid, big or small as long as it works
- Write the code with proper file extension
- Try to keep pull requests small to minimize merge conflicts


## Getting Started 🤩🤗:

- Star this repo
- Fork this repo
- Clone on your local machine

```terminal
git clone https://github.com/avastino7/Algorithms-Data-Structures
```
- Navigate to project directory.
```terminal
cd Algorithms-Data-Structures
```

- Create a new Branch

```markdown
git checkout -b my-new-branch
```

git add .
```
- Commit your changes.

git commit -m "Your Comments"
```
- Then push 
```markdown
git push origin my-new-branch
```


- Create a new pull request from your forked repository

<br>

## Avoid Conflicts

An easy way to avoid conflicts is to add an 'upstream' for your git repo, as other PR's may be merged while you're working on your branch/fork.   

```terminal
git remote add upstream https://github.com/avastino7/Algorithms-Data-Structures
```

You can verify that the new remote has been added by typing
```terminal
git remote -v
```

To pull any new changes from your parent repo simply run
```terminal
git merge upstream/master
```

This will give you any eventual conflicts and allow you to easily solve them in your repo. It's a good idea to use it frequently in between your own commits to make sure that your repo is up to date with its parent.
