重新學習C++

重要愛念: 
        Untracked = Git 還不知道這些檔案

檢查Git狀態:
        git status

檢查提交歷史: 
        git log --oneline

ADD:   
     方法一:　逐一加入 git add README.md git add app.js
     方法二:  一次加入全部 git add . 

     重要概念: 
            綠色 = 已在暫存區，準備提交，代表當前目錄的所有檔案

Commit: 
    Commit(提交) :像是一個「存檔點」，用來記錄當下的檔案狀態
    提交指令: git commit -m "Install Commit: add README and count.cpp"

        提交訊息建議:
                (1) 簡潔明瞭
                (2) 描述這次改了什麼 
                (3) 使用現在式動詞 

更新到GitHub:
            1. git add . 
            2. git commit -m "Install commit: add README"
            3. git branch -M main 
            4. git push -u origin main

建立新的GitHub:
