#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::Service { class ProhibitWordType; }

#define PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_BLACK_OFFSET UNITYSDK_OFFSET(0x1FD2130)
#define PROHIBITEDWORDDOWNLOADSERVICE_DOWNLOADPROHIBITEDWORD_OFFSET UNITYSDK_OFFSET(0x1FD2180)
#define PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_CHATTING_BLACK_OFFSET UNITYSDK_OFFSET(0x1FD2770)
#define PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_BLACK_OFFSET UNITYSDK_OFFSET(0x1FD27B0)
#define PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_WHITE_OFFSET UNITYSDK_OFFSET(0x1FD27F0)
#define PROHIBITEDWORDDOWNLOADSERVICE_CODOWNLOADPROHIBITEDWORDLIST_OFFSET UNITYSDK_OFFSET(0x1FD26E0)
#define PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_CHATTING_BLACK_OFFSET UNITYSDK_OFFSET(0x1FD2850)
#define PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_WHITE_OFFSET UNITYSDK_OFFSET(0x1FD28A0)

	inline static constexpr unsigned int ProhibitedWordDownLoadService_TypeDefinitionIndex = 3023;

	class ProhibitedWordDownLoadService : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* _Regex_Black_k__BackingField; // 0x0
		::System::Text::RegularExpressions::Regex* _Regex_White_k__BackingField; // 0x8
		::System::Text::RegularExpressions::Regex* _Regex_Chatting_Black_k__BackingField; // 0x10
		::UnityEngine::Coroutine* DownloadProhibitedWordCoroutine; // 0x18

		::System::Void set_Regex_Black(::System::Text::RegularExpressions::Regex* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_BLACK_OFFSET))(arg, nullptr);
		}

		::System::Void DownloadProhibitedWord(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_DOWNLOADPROHIBITEDWORD_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Text::RegularExpressions::Regex* get_Regex_Chatting_Black()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_CHATTING_BLACK_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Regex* get_Regex_Black()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_BLACK_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Regex* get_Regex_White()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_GET_REGEX_WHITE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDownloadProhibitedWordList(::System::String* str, Il2CppObject* arg, ::MX::GameLogic::Service::ProhibitWordType* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::MX::GameLogic::Service::ProhibitWordType*, ::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_CODOWNLOADPROHIBITEDWORDLIST_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void set_Regex_Chatting_Black(::System::Text::RegularExpressions::Regex* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_CHATTING_BLACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Regex_White(::System::Text::RegularExpressions::Regex* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::PVOID))((::PBYTE)hIl2Cpp + PROHIBITEDWORDDOWNLOADSERVICE_SET_REGEX_WHITE_OFFSET))(arg, nullptr);
		}

	};

