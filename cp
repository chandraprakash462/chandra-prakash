<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>CSE Student Meme 😂</title>

    <style>
        * {
            box-sizing: border-box;
        }

        body {
            margin: 0;
            min-height: 100vh;
            padding: 25px 15px;
            display: flex;
            justify-content: center;
            align-items: center;
            font-family: Arial, sans-serif;
            color: white;
            background: linear-gradient(
                135deg,
                #0f172a,
                #312e81,
                #701a75
            );
        }

        .container {
            width: 100%;
            max-width: 900px;
            padding: 30px;
            text-align: center;
            background: #111827;
            border: 1px solid #ffffff30;
            border-radius: 20px;
            box-shadow: 0 15px 40px #0008;
        }

        .tag {
            display: inline-block;
            padding: 8px 15px;
            color: #c7d2fe;
            background: #312e81;
            border-radius: 20px;
            font-weight: bold;
        }

        h1 {
            font-size: clamp(26px, 5vw, 40px);
            margin: 20px 0 10px;
        }

        .description {
            color: #cbd5e1;
            line-height: 1.6;
        }

        img {
            width: 100%;
            height: auto;
            display: block;
            margin-top: 25px;
            border-radius: 15px;
        }

        .caption {
            margin: 20px 0;
            color: #fde68a;
            font-size: clamp(18px, 3vw, 25px);
            font-weight: bold;
            line-height: 1.5;
        }

        button {
            padding: 12px 20px;
            border: none;
            border-radius: 10px;
            background: #facc15;
            color: #111827;
            font-size: 16px;
            font-weight: bold;
            cursor: pointer;
        }

        button:hover {
            background: #fde047;
        }

        footer {
            margin-top: 25px;
            color: #94a3b8;
            font-size: 13px;
        }
    </style>
</head>

<body>

    <div class="container">

        <span class="tag">CSE STUDENT MEME 😂</span>

        <h1>That One Friend Before the Exam</h1>

        <p class="description">
            When your friend says he didn't study anything,
            but you know the truth! 💀
        </p>

        <!-- Your meme image -->
        <img src="meme.png"
             alt="Funny reaction meme of two friends">

        <!-- Meme caption -->
        <div class="caption" id="caption">
            "Dei, naan onnum padikkala da..." 😂
            <br>
            Also him: Finishes the paper in 20 minutes 💀
        </div>

        <!-- Change caption button -->
        <button onclick="changeCaption()">
            Show Another Meme Caption 🔁
        </button>

        <footer>
            Made with ❤️ using HTML and CSS
        </footer>

    </div>

    <script>
        const captions = [
            '"Dei, naan onnum padikkala da..." 😂<br>Also him: Finishes the paper in 20 minutes 💀',

            'When the topper says "Exam romba tough da!" 😭<br>Bro, we are finished! 💀',

            '"Just important questions mattum padichen da!" 🤡<br>Secretly studied the entire syllabus 📚',

            'Me asking for one answer:<br>Friend sends the entire textbook 😂',

            'Exam tomorrow. Me tonight:<br>One last reel da! 💀'
        ];

        let index = 0;

        function changeCaption() {
            index = (index + 1) % captions.length;

            document.getElementById("caption").innerHTML =
                captions[index];
        }
    </script>

</body>
</html>
