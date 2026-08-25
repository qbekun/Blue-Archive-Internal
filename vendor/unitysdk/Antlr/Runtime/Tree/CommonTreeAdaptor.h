#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CBA70)
#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x4CBA80)
#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_SETTOKENBOUNDARIES_OFFSET UNITYSDK_OFFSET(0x4CBB00)
#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETNODETEXT_OFFSET UNITYSDK_OFFSET(0x4CBD80)
#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETNODETYPE_OFFSET UNITYSDK_OFFSET(0x4CBE70)
#define ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x4CBF60)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int CommonTreeAdaptor_TypeDefinitionIndex = 37408;

	class CommonTreeAdaptor : public ::UnityEngine::Bindings::CodegenOptions
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Create(::Antlr::Runtime::IToken* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTokenBoundaries(::System::Object* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::IToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_SETTOKENBOUNDARIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetNodeText(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETNODETEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNodeType(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETNODETYPE_OFFSET))(arg, nullptr);
		}

		::Antlr::Runtime::IToken* GetToken(::System::Object* arg)
		{
			return (return (::Antlr::Runtime::IToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREEADAPTOR_GETTOKEN_OFFSET))(arg, nullptr);
		}

	};
}

