#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime { class ITokenStream; }
namespace Antlr::Runtime { class IToken; }
namespace Antlr::Runtime { class RecognitionException; }

#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CACF0)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNILNODE_OFFSET UNITYSDK_OFFSET(0x4CAD00)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_ERRORNODE_OFFSET UNITYSDK_OFFSET(0x4CAD20)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x4CAD90)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_RULEPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x4CAED0)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNODETYPE_OFFSET UNITYSDK_OFFSET(0x4CB1A0)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNODETEXT_OFFSET UNITYSDK_OFFSET(0x4CB290)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_SETTOKENBOUNDARIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int BaseTreeAdaptor_TypeDefinitionIndex = 37406;

	class BaseTreeAdaptor : public Il2CppObject
	{
	public:
		::System::Int32 uniqueNodeID; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* GetNilNode()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNILNODE_OFFSET))(nullptr);
		}

		::System::Object* ErrorNode(::Antlr::Runtime::ITokenStream* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::RecognitionException* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::ITokenStream*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_ERRORNODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddChild(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_ADDCHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* RulePostProcessing(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_RULEPOSTPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNodeType(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNODETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetNodeText(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETNODETEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Create(::Antlr::Runtime::IToken* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTokenBoundaries(::System::Object* arg, ::Antlr::Runtime::IToken* arg, ::Antlr::Runtime::IToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Antlr::Runtime::IToken*, ::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_SETTOKENBOUNDARIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Antlr::Runtime::IToken* GetToken(::System::Object* arg)
		{
			return (return (::Antlr::Runtime::IToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREEADAPTOR_GETTOKEN_OFFSET))(arg, nullptr);
		}

	};
}

