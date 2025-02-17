# Warp  

**Warp** is a lightweight Terminal User Interface (TUI) tool designed to make directory navigation fast, intuitive, and developer-friendly. Forget wasting time scrolling through directory trees—jump straight to where you need to go with Warp.  


![](assets/dem.gif)  

---

## Features  
- 🚀 **Quick Navigation**: Jump between directories in an instant.  
- 🔖 **Bookmarks**: Save and organize frequently accessed directories.  
- 🖥️ **Minimal Interface**: Clean, distraction-free terminal UI.  
- ⚡ **Developer-Focused**: Built for speed and productivity.  

---

## Installation  

1. Clone this repository:  
   ```bash
   git clone https://github.com/yourusername/warp.git
   ```  

2. Navigate to the directory:  
   ```bash
   cd warp
   ```  

3. Build and run the tool (adjust based on your tool’s language/environment):  
   ```bash
   make
   ./warp
   ```  

---

## Usage  

1. Launch the tool:  
   ```bash
   ./warp
   ```  

2. Use the following keyboard shortcuts to navigate:  
   - `j` / `k` : Move up and down in the directory list.  
   - `Enter` : Select and jump to a directory.  
   - `b` : Bookmark a directory.  
   - `q` : Quit the tool.  

3. Customize your bookmarks by editing the configuration file:  
   ```plaintext
   ~/.warp/config.json
   ```  

---

## Configuration  

Add the name you would like to have the path displayed as to this array   
```bash
declare -A Options=(
  ["Graphite"]="/mnt/e/Graphite/"
  ["Script"]="/usr/sbin/"
  ["Notes"]="/mnt/e/Zettelkatsen/"
  ["sr"]="/mnt/e/scripts/"
)

```  
Then add the title to the array below it 
```bash
key_order=("Graphite" "Script" "Notes" "sr")
```
---

## Contributing  

We welcome contributions from the community! If you'd like to contribute:  
1. Fork the repository.  
2. Create a feature branch:  
   ```bash
   git checkout -b feature/new-feature
   ```  
3. Commit your changes and push:  
   ```bash
   git commit -m "Add a new feature"
   git push origin feature/new-feature
   ```  
4. Open a pull request.  


