#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXToyLocaleManager; }

#define NPA_EDITOR_NXTOYLOCALEMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D6D390)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9D6D6F0)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9D7D990)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_GETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9D7DA30)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_LOADLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9D70F60)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_GETLOCALE_OFFSET UNITYSDK_OFFSET(0x9D7D850)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9D703B0)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7D840)
#define NPA_EDITOR_NXTOYLOCALEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D7DB10)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXToyLocaleManager_TypeDefinitionIndex = 26249;

	class NXToyLocaleManager : public Il2CppObject
	{
	public:
		::NPA::Editor::NXToyLocaleManager* instance; // 0x0
		::System::Object* instanceLock; // 0x8

		::NPA::Editor::NXToyLocaleManager* getInstance()
		{
			return (return (::NPA::Editor::NXToyLocaleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::String* getString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* getString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_GETSTRING_OFFSET))(str, str, nullptr);
		}

		COUNTRY* getCountry()
		{
			return (return (COUNTRY*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_GETCOUNTRY_OFFSET))(nullptr);
		}

		::System::Void loadLocatedCountry(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_LOADLOCATEDCOUNTRY_OFFSET))(arg, nullptr);
		}

		LOCALE* getLocale()
		{
			return (return (LOCALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_GETLOCALE_OFFSET))(nullptr);
		}

		::System::Void setLocale(LOCALE* arg)
		{
			((::System::Void(*)(LOCALE*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_SETLOCALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOYLOCALEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

