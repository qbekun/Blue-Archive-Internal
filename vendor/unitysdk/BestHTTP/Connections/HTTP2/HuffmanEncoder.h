#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETROOT_OFFSET UNITYSDK_OFFSET(0x90F6D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x902B20)
#define BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETNEXT_OFFSET UNITYSDK_OFFSET(0x90F770)
#define BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETENTRYFORCODEPOINT_OFFSET UNITYSDK_OFFSET(0x910B90)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HuffmanEncoder_TypeDefinitionIndex = 23469;

	class HuffmanEncoder : public Il2CppObject
	{
	public:
		::System::UInt16 EOS; // 0x0
		::Il2CppArray<::System::Object*>* StaticTable; // 0x0
		::Il2CppArray<::System::Object*>* HuffmanTree; // 0x8

		TreeNode* GetRoot()
		{
			return (return (TreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETROOT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_.CCTOR_OFFSET))(nullptr);
		}

		TreeNode* GetNext(TreeNode* arg, ::System::Byte arg)
		{
			return (return (TreeNode*(*)(TreeNode*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETNEXT_OFFSET))(arg, arg, nullptr);
		}

		TableEntry* GetEntryForCodePoint(::System::UInt16 arg)
		{
			return (return (TableEntry*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HUFFMANENCODER_GETENTRYFORCODEPOINT_OFFSET))(arg, nullptr);
		}

	};
}

