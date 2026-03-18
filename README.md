# 🎬 YDM (YouTube Download Manager) - C++ CLI Wrapper

## 📌 Project Overview
YDM is a lightweight, interactive Command Line Interface (CLI) built in **C++**. It acts as a streamlined wrapper that orchestrates powerful backend tools (`yt-dlp` and `FFmpeg`) to download YouTube videos and audio effortlessly.

Instead of manually typing complex terminal arguments, this program uses C++ `system()` calls to dynamically construct commands based on user inputs via a clean, color-coded terminal menu.

## ✨ Key Features
* **Interactive UI:** Custom ASCII art and color-coded error handling directly in the Windows CMD.
* **Smart Orchestration:** Dynamically constructs string commands in C++ to execute external processes.
* **Advanced JS Decoding:** Utilizes the `--js-runtimes node` flag to process dynamic cipher puzzles natively through Node.js.
* **Format Selection:** Easily switch between 1080p, 720p video (auto-merging audio/video via FFmpeg), or MP3 audio extraction.

## 🛠️ Under the Hood (Technologies)
* **Core Logic:** C++ (`<iostream>`, `<cstdlib>`, `<string>`)
* **Engines Orchestrated:** `yt-dlp` (Core engine), `ffmpeg` (Media merging), and `Node.js` (Runtime JS puzzle solving).

## 📥 Want to use the software? (Download)
Because GitHub has a strict file size limit, I cannot host the heavy FFmpeg engines and Node.js installers directly in this repository. 

If you want to run the actual software without compiling the code yourself, you can download the full, ready-to-use `.zip` package (which includes the `.exe`, the engines, and the Node installer) from my Google Drive:
**👉 https://drive.google.com/file/d/1jV4qj8pFahv5jHCfom06BFl-HAdZCo3t/view?usp=drive_link**

## 👨‍💻 Author
**M Umar Farooq**  **FAST-NUCES Software Engineering Student**
* [Connect with me on LinkedIn](https://www.linkedin.com/in/nawabumer512)
