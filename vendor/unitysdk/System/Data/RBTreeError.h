#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTreeError_TypeDefinitionIndex = 32279;

	class RBTreeError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::RBTreeError* InvalidPageSize; // 0x0
		::System::Data::RBTreeError* PagePositionInSlotInUse; // 0x0
		::System::Data::RBTreeError* NoFreeSlots; // 0x0
		::System::Data::RBTreeError* InvalidStateinInsert; // 0x0
		::System::Data::RBTreeError* InvalidNextSizeInDelete; // 0x0
		::System::Data::RBTreeError* InvalidStateinDelete; // 0x0
		::System::Data::RBTreeError* InvalidNodeSizeinDelete; // 0x0
		::System::Data::RBTreeError* InvalidStateinEndDelete; // 0x0
		::System::Data::RBTreeError* CannotRotateInvalidsuccessorNodeinDelete; // 0x0
		::System::Data::RBTreeError* IndexOutOFRangeinGetNodeByIndex; // 0x0
		::System::Data::RBTreeError* RBDeleteFixup; // 0x0
		::System::Data::RBTreeError* UnsupportedAccessMethod1; // 0x0
		::System::Data::RBTreeError* UnsupportedAccessMethod2; // 0x0
		::System::Data::RBTreeError* UnsupportedAccessMethodInNonNillRootSubtree; // 0x0
		::System::Data::RBTreeError* AttachedNodeWithZerorbTreeNodeId; // 0x0
		::System::Data::RBTreeError* CompareNodeInDataRowTree; // 0x0
		::System::Data::RBTreeError* CompareSateliteTreeNodeInDataRowTree; // 0x0
		::System::Data::RBTreeError* NestedSatelliteTreeEnumerator; // 0x0

	};
}

