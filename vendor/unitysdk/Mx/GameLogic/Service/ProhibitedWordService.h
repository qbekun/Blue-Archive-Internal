#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class Language; }
namespace MX::GameLogic::Service { class ProhibitWordType; }

#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISCONTAINSSPECIALCHARACTER_OFFSET UNITYSDK_OFFSET(0xFC4200)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONTAINSWHITESPACE_OFFSET UNITYSDK_OFFSET(0xFC4330)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISKATAKANA_OFFSET UNITYSDK_OFFSET(0xFC4390)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISFORBIDDEN_OFFSET UNITYSDK_OFFSET(0xFC4430)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISALLOWED_OFFSET UNITYSDK_OFFSET(0xFC44D0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_PROHIBITEDWORDFILTER_OFFSET UNITYSDK_OFFSET(0xFC4C50)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISNAMECHECK_OFFSET UNITYSDK_OFFSET(0xFC53B0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_REPLACE_OFFSET UNITYSDK_OFFSET(0xFC5440)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_PROHIBITEDWORDFILTER_OFFSET UNITYSDK_OFFSET(0xFC4D70)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISALLOWED_OFFSET UNITYSDK_OFFSET(0xFC46B0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_HIRAGANATOKATAKANA_OFFSET UNITYSDK_OFFSET(0xFC54B0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TONARROW_OFFSET UNITYSDK_OFFSET(0xFC58B0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_HIRAGANATOKATAKANA_OFFSET UNITYSDK_OFFSET(0xFC5690)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TONARROW_OFFSET UNITYSDK_OFFSET(0xFC56C0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TOWIDE_OFFSET UNITYSDK_OFFSET(0xFC5980)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CREATEREGEXFROMBYTES_OFFSET UNITYSDK_OFFSET(0xFC5A30)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTSTRINGLISTTOREGEX_OFFSET UNITYSDK_OFFSET(0xFC5EB0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_GETLISTFROMBYTES_OFFSET UNITYSDK_OFFSET(0xFC5A90)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTFIXEDWORD_OFFSET UNITYSDK_OFFSET(0xFC6330)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTCHARACTER_OFFSET UNITYSDK_OFFSET(0xFC6400)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC64F0)
#define MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFC6500)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ProhibitedWordService_TypeDefinitionIndex = 12406;

	class ProhibitedWordService : public Il2CppObject
	{
	public:
		::System::Int32 _maxTimeoutInSeconds; // 0x0
		::System::Text::RegularExpressions::Regex* _regex_Katakana; // 0x0
		::System::Text::RegularExpressions::Regex* _regex_ForbiddenJapaneseNameCharacters; // 0x8
		::System::Text::RegularExpressions::Regex* _regex_ForbiddenKoreanChattingCharacters; // 0x10
		::System::Text::RegularExpressions::Regex* _regex_ForbiddenKoreanNameCharacters; // 0x18

		::System::Boolean IsContainsSpecialCharacter(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISCONTAINSSPECIALCHARACTER_OFFSET))(str, nullptr);
		}

		::System::Boolean ContainsWhitespace(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONTAINSWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsKatakana(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISKATAKANA_OFFSET))(str, nullptr);
		}

		::System::Boolean IsForbidden(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::System::Boolean arg3, ::FlatData::Language* arg4, ::MX::NetworkProtocol::WebAPIErrorCode&* arg5, ::System::String&* arg6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::System::Boolean, ::FlatData::Language*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISFORBIDDEN_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsAllowed(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::System::Boolean arg3, ::FlatData::Language* arg4, ::MX::NetworkProtocol::WebAPIErrorCode&* arg5, ::System::String&* arg6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::System::Boolean, ::FlatData::Language*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISALLOWED_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::String* ProhibitedWordFilter(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::System::Boolean arg3, ::FlatData::Language* arg4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::System::Boolean, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_PROHIBITEDWORDFILTER_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsNameCheck(::FlatData::Language* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::FlatData::Language*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISNAMECHECK_OFFSET))(arg, str, nullptr);
		}

		::System::String* Replace(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_REPLACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ProhibitedWordFilter(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::System::Text::RegularExpressions::Regex* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_PROHIBITEDWORDFILTER_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAllowed(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::System::Text::RegularExpressions::Regex* arg3, ::MX::NetworkProtocol::WebAPIErrorCode&* arg4, ::System::String&* arg5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_ISALLOWED_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::String* HiraganaToKatakana(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_HIRAGANATOKATAKANA_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToNarrow(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TONARROW_OFFSET))(str, nullptr);
		}

		::System::Char HiraganaToKatakana(::System::Char arg)
		{
			return ((::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_HIRAGANATOKATAKANA_OFFSET))(arg, nullptr);
		}

		::System::Char ToNarrow(::System::Char arg)
		{
			return ((::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TONARROW_OFFSET))(arg, nullptr);
		}

		::System::Char ToWide(::System::Char arg)
		{
			return ((::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_TOWIDE_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::Regex* CreateRegexFromBytes(::Il2CppArray<::System::Object*>* arg, ::MX::GameLogic::Service::ProhibitWordType* arg2)
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::Il2CppArray<::System::Object*>*, ::MX::GameLogic::Service::ProhibitWordType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CREATEREGEXFROMBYTES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Text::RegularExpressions::Regex* ConvertStringListToRegEx(Il2CppObject* arg, ::MX::GameLogic::Service::ProhibitWordType* arg2)
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(Il2CppObject*, ::MX::GameLogic::Service::ProhibitWordType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTSTRINGLISTTOREGEX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetListFromBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return ((Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_GETLISTFROMBYTES_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertFixedWord(::System::String* str, ::MX::GameLogic::Service::ProhibitWordType* arg)
		{
			return ((::System::String*(*)(::System::String*, ::MX::GameLogic::Service::ProhibitWordType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTFIXEDWORD_OFFSET))(str, arg, nullptr);
		}

		::System::String* ConvertCharacter(::System::Char arg)
		{
			return ((::System::String*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_CONVERTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PROHIBITEDWORDSERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

