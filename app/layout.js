import { Inter } from "next/font/google";
import "./globals.css";
import { MainHeader } from "@/components/header";

const inter = Inter({ subsets: ["latin"] });

export const metadata = {
  title: "Create Next App",
  description: "Generated by create next app",
};

export default function RootLayout({ children }) {
  return (
    <html lang="en" className="scroll-smooth">
      <head>
        <meta
          name="viewport"
          content="width=device-width, initial-scale=1.0"
        ></meta>
      </head>
      <body className={inter.className}>
        {/* <div className="pt-4">
          <MainHeader />
        </div> */}
        {children}
      </body>
    </html>
  );
}
