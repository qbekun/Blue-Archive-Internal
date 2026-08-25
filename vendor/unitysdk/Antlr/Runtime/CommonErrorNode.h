#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class IToken; }
namespace Antlr::Runtime { class RecognitionException; }
namespace Antlr::Runtime { class ITokenStream; }

#define ANTLR_RUNTIME_COMMONERRORNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C7B90)
#define ANTLR_RUNTIME_COMMONERRORNODE_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x4C7DD0)
#define ANTLR_RUNTIME_COMMONERRORNODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4C7DE0)
#define ANTLR_RUNTIME_COMMONERRORNODE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x4C7DF0)
#define ANTLR_RUNTIME_COMMONERRORNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C8290)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int CommonErrorNode_TypeDefinitionIndex = 37398;

	class CommonErrorNode : public Il2CppObject
	{
	public:
		::Antlr::Runtime::IIntStream* input; // 0x38
		::Antlr::Runtime::IToken* start; // 0x40
		::Antlr::Runtime::IToken* stop; // 0x48
		::Antlr::Runtime::RecognitionException* trappedException; // 0x50

		::System::Void .ctor(::Antlr::Runtime::ITokenStream* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenStream*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONERRORNODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONERRORNODE_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONERRORNODE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONERRORNODE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONERRORNODE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

