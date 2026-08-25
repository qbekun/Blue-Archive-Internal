#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class BaseRecognizer; }
namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class NoViableAltException; }

#define ANTLR_RUNTIME_DFA_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C3950)
#define ANTLR_RUNTIME_DFA_PREDICT_OFFSET UNITYSDK_OFFSET(0x4C3960)
#define ANTLR_RUNTIME_DFA_NOVIABLEALT_OFFSET UNITYSDK_OFFSET(0x4C4060)
#define ANTLR_RUNTIME_DFA_ERROR_OFFSET UNITYSDK_OFFSET(0x4C4180)
#define ANTLR_RUNTIME_DFA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x4C4190)
#define ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRING_OFFSET UNITYSDK_OFFSET(0x4C41C0)
#define ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x4C4300)
#define ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRINGTOUNSIGNEDCHARS_OFFSET UNITYSDK_OFFSET(0x4C43F0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int DFA_TypeDefinitionIndex = 37381;

	class DFA : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* eot; // 0x10
		::Il2CppArray<::System::Object*>* eof; // 0x18
		::Il2CppArray<::System::Object*>* min; // 0x20
		::Il2CppArray<::System::Object*>* max; // 0x28
		::Il2CppArray<::System::Object*>* accept; // 0x30
		::Il2CppArray<::System::Object*>* special; // 0x38
		::Il2CppArray<::System::Object*>* transition; // 0x40
		::System::Int32 decisionNumber; // 0x48
		SpecialStateTransitionHandler* specialStateTransitionHandler; // 0x50
		::Antlr::Runtime::BaseRecognizer* recognizer; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Predict(::Antlr::Runtime::IIntStream* arg)
		{
			return (return (::System::Int32(*)(::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_PREDICT_OFFSET))(arg, nullptr);
		}

		::System::Void NoViableAlt(::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_NOVIABLEALT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Error(::Antlr::Runtime::NoViableAltException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::NoViableAltException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_ERROR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* UnpackEncodedString(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRING_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* UnpackEncodedStringArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRINGARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* UnpackEncodedStringToUnsignedChars(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_DFA_UNPACKENCODEDSTRINGTOUNSIGNEDCHARS_OFFSET))(str, nullptr);
		}

	};
}

