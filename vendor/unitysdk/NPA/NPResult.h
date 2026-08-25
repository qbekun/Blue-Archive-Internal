#pragma once
#include "../unitysdk.h"

namespace NPA { class NPRequestTypeTag; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA { class NPResult; }
namespace NPA { class NXPResult; }

#define NPA_NPRESULT_FROMTOYRESULT_OFFSET UNITYSDK_OFFSET(0x9BBDEB0)
#define NPA_NPRESULT_CUSTOMINDENTLOG_OFFSET UNITYSDK_OFFSET(0x9BBDF50)
#define NPA_NPRESULT_GENERATEOBJECT_OFFSET UNITYSDK_OFFSET(0x9BBDFE0)
#define NPA_NPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDF40)

namespace NPA
{
	inline static constexpr unsigned int NPResult_TypeDefinitionIndex = 25547;

	class NPResult : public Il2CppObject
	{
	public:
		::NPA::NPRequestTypeTag* requestTag; // 0x10
		::System::Int32 errorCode; // 0x14
		::NPA::SimpleJSON::JSONNode* resultJson; // 0x18

		::NPA::NPResult* fromToyResult(::NPA::NXPResult* arg)
		{
			return (return (::NPA::NPResult*(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPRESULT_FROMTOYRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void CustomIndentLog(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPRESULT_CUSTOMINDENTLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Object* GenerateObject(::System::Type* arg, ::NPA::SimpleJSON::JSONNode* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::NPA::SimpleJSON::JSONNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPRESULT_GENERATEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

