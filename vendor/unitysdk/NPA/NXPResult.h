#pragma once
#include "../unitysdk.h"

namespace NPA { class NPRequestTypeTag; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_NXPRESULT_GET_RESULTJSON_OFFSET UNITYSDK_OFFSET(0x9BBEFF0)
#define NPA_NXPRESULT_SET_RESULTJSON_OFFSET UNITYSDK_OFFSET(0x9BBF0F0)
#define NPA_NXPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBF100)
#define NPA_NXPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBF160)
#define NPA_NXPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBF200)
#define NPA_NXPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBF2B0)
#define NPA_NXPRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBF330)

namespace NPA
{
	inline static constexpr unsigned int NXPResult_TypeDefinitionIndex = 25548;

	class NXPResult : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x10
		::System::String* errorText; // 0x18
		::System::String* errorDetail; // 0x20
		::NPA::NPRequestTypeTag* requestTag; // 0x28
		::NPA::SimpleJSON::JSONNode* _resultJson; // 0x30

		::NPA::SimpleJSON::JSONNode* get_resultJson()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_GET_RESULTJSON_OFFSET))(nullptr);
		}

		::System::Void set_resultJson(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_SET_RESULTJSON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPRequestTypeTag* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPRequestTypeTag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

