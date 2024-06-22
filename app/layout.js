import { Inter } from "next/font/google";
import "./globals.css";
import { cn } from "@/lib/utils";
import { ModeToggle } from "@/components/modechange";
import { ThemeProvider } from "@/components/themeprovider";
const inter = Inter({ subsets: ["latin"], variable: "--font-sans" });

export const metadata = {
  title: "Create Next App",
  description: "Generated by create next app",
};

export default function RootLayout({ children }) {
  return (
    <html lang="en" className="dark scroll-smooth">
      <body
        className={cn(
          "min-h-screen bg-background font-sans antialiased",
          inter.variable,
        )}
      >
        <ThemeProvider
          attribute="class"
          defaultTheme="system"
          enableSystem
          disableTransitionOnChange
        >
          {children}
        </ThemeProvider>
      </body>
    </html>
  );
}