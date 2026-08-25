#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime::Tree { class ITreeAdaptor; }

#define ANTLR_RUNTIME_TREE_ITREENODESTREAM_GET_TREEADAPTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREENODESTREAM_LT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREENODESTREAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int ITreeNodeStream_TypeDefinitionIndex = 37411;

	class ITreeNodeStream : public Il2CppObject
	{
	public:
		::Antlr::Runtime::Tree::ITreeAdaptor* get_TreeAdaptor()
		{
			return (return (::Antlr::Runtime::Tree::ITreeAdaptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREENODESTREAM_GET_TREEADAPTOR_OFFSET))(nullptr);
		}

		::System::Object* LT(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREENODESTREAM_LT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREENODESTREAM_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

