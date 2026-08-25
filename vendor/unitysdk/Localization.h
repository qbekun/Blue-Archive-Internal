#pragma once
#include "unitysdk.h"

class LoadFunction;
class OnLocalizeNotification;
namespace UnityEngine { class TextAsset; }

#define LOCALIZATION_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x19907A0)
#define LOCALIZATION_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1990C60)
#define LOCALIZATION_GET_KNOWNLANGUAGES_OFFSET UNITYSDK_OFFSET(0x1990CE0)
#define LOCALIZATION_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1990DE0)
#define LOCALIZATION_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19910D0)
#define LOCALIZATION_RELOAD_OFFSET UNITYSDK_OFFSET(0x1991180)
#define LOCALIZATION_LOADDICTIONARY_OFFSET UNITYSDK_OFFSET(0x19908A0)
#define LOCALIZATION_LOADANDSELECT_OFFSET UNITYSDK_OFFSET(0x1990EF0)
#define LOCALIZATION_LOAD_OFFSET UNITYSDK_OFFSET(0x1991600)
#define LOCALIZATION_SET_OFFSET UNITYSDK_OFFSET(0x1991300)
#define LOCALIZATION_REPLACEKEY_OFFSET UNITYSDK_OFFSET(0x19918A0)
#define LOCALIZATION_CLEARREPLACEMENTS_OFFSET UNITYSDK_OFFSET(0x1991970)
#define LOCALIZATION_LOADCSV_OFFSET UNITYSDK_OFFSET(0x1991A00)
#define LOCALIZATION_LOADCSV_OFFSET UNITYSDK_OFFSET(0x19912B0)
#define LOCALIZATION_HASLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1992760)
#define LOCALIZATION_LOADCSV_OFFSET UNITYSDK_OFFSET(0x1991A70)
#define LOCALIZATION_ADDCSV_OFFSET UNITYSDK_OFFSET(0x1992870)
#define LOCALIZATION_EXTRACTSTRINGS_OFFSET UNITYSDK_OFFSET(0x1992BA0)
#define LOCALIZATION_SELECTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x19913A0)
#define LOCALIZATION_SET_OFFSET UNITYSDK_OFFSET(0x19916A0)
#define LOCALIZATION_SET_OFFSET UNITYSDK_OFFSET(0x1992EA0)
#define LOCALIZATION_HAS_OFFSET UNITYSDK_OFFSET(0x1992FE0)
#define LOCALIZATION_GET_OFFSET UNITYSDK_OFFSET(0x1993680)
#define LOCALIZATION_FORMAT_OFFSET UNITYSDK_OFFSET(0x1993EF0)
#define LOCALIZATION_FORMAT_OFFSET UNITYSDK_OFFSET(0x1994020)
#define LOCALIZATION_FORMAT_OFFSET UNITYSDK_OFFSET(0x1994160)
#define LOCALIZATION_FORMAT_OFFSET UNITYSDK_OFFSET(0x19942C0)
#define LOCALIZATION_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1994440)
#define LOCALIZATION_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1994450)
#define LOCALIZATION_EXISTS_OFFSET UNITYSDK_OFFSET(0x19944A0)
#define LOCALIZATION_SET_OFFSET UNITYSDK_OFFSET(0x1994640)
#define LOCALIZATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1994E00)

	inline static constexpr unsigned int Localization_TypeDefinitionIndex = 106;

	class Localization : public Il2CppObject
	{
	public:
		LoadFunction* loadFunction; // 0x0
		OnLocalizeNotification* onLocalize; // 0x8
		::System::Boolean localizationHasBeenSet; // 0x10
		::Il2CppArray<::System::Object*>* mLanguages; // 0x18
		Il2CppObject* mOldDictionary; // 0x20
		Il2CppObject* mDictionary; // 0x28
		Il2CppObject* mReplacement; // 0x30
		::System::Int32 mLanguageIndex; // 0x38
		::System::String* mLanguage; // 0x40
		::System::Boolean mMerging; // 0x48

		Il2CppObject* get_dictionary()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void set_dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_knownLanguages()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_GET_KNOWNLANGUAGES_OFFSET))(nullptr);
		}

		::System::String* get_language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_GET_LANGUAGE_OFFSET))(nullptr);
		}

		::System::Void set_language(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_LANGUAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean Reload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_RELOAD_OFFSET))(nullptr);
		}

		::System::Boolean LoadDictionary(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOADDICTIONARY_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean LoadAndSelect(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOADANDSELECT_OFFSET))(str, nullptr);
		}

		::System::Void Load(::UnityEngine::TextAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAsset*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReplaceKey(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_REPLACEKEY_OFFSET))(str, str2, nullptr);
		}

		::System::Void ClearReplacements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_CLEARREPLACEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean LoadCSV(::UnityEngine::TextAsset* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOADCSV_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean LoadCSV(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOADCSV_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLanguage(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_HASLANGUAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean LoadCSV(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::TextAsset* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::TextAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOADCSV_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddCSV(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_ADDCSV_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExtractStrings(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2, Il2CppObject* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_EXTRACTSTRINGS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SelectLanguage(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SELECTLANGUAGE_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean Has(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_HAS_OFFSET))(str, nullptr);
		}

		::System::String* Get(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_GET_OFFSET))(str, arg, nullptr);
		}

		::System::String* Format(::System::String* str, ::System::Object* arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_FORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* Format(::System::String* str, ::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_FORMAT_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::String* Format(::System::String* str, ::System::Object* arg, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_FORMAT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::String* Format(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_FORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::String* Localize(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_LOCALIZE_OFFSET))(str, nullptr);
		}

		::System::Boolean Exists(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_EXISTS_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_SET_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZATION_.CCTOR_OFFSET))(nullptr);
		}

	};

