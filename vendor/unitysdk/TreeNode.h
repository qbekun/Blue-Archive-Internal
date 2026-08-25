#pragma once
#include "unitysdk.h"

#define TREENODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91EB20)

	inline static constexpr unsigned int TreeNode_TypeDefinitionIndex = 23468;

	class TreeNode : public Il2CppObject
	{
	public:
		::System::UInt16 NextZeroIdx; // 0x10
		::System::UInt16 NextOneIdx; // 0x12
		::System::UInt16 Value; // 0x14

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TREENODE_TOSTRING_OFFSET))(nullptr);
		}

	};

