compatability-policy {
    minimum: "0.50.0.0";
    maximum: "${OneLessThanCurrent}"; // this is the default
}

package {
    version: "${package-version}";
    location: "http://coapp.org/repository/${OutputFilename}";

    feed: "http://coapp.org/repository/packages.atom.xml";
    publisher: "CoApp Project";
}

license[lgpl] {
    license-url: "http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html";
    license-type: "LGPL";
}

metadata {
    description: @"GNU Aspell is a Free and Open Source spell checker designed to eventually replace Ispell. It can either be used as a library or as an independent spell checker. Its main feature is that it does a superior job of suggesting possible replacements for a misspelled word than just about any other spell checker out there for the English language. Unlike Ispell, Aspell can also easily check documents in UTF-8 without having to use a special dictionary. Aspell will also do its best to respect the current locale setting. Other advantages over Ispell include support for using multiple dictionaries at once and intelligently handling personal dictionaries when more than one Aspell process is open at once.

Web site: http://aspell.net/"; // or path to a file...
    
    author-version : "${package-version}";
    bug-tracker: "https://github.com/coapp-packages/aspell/issues";
    stability : "0";
    licenses : {
        lgpl
    };
}
