#pragma once
#include "unitysdk.h"

#define INDEXTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9770AC0)
#define INDEXTREE_COMPARENODE_OFFSET UNITYSDK_OFFSET(0x9771670)
#define INDEXTREE_COMPARESATELITETREENODE_OFFSET UNITYSDK_OFFSET(0x9771690)

	inline static constexpr unsigned int IndexTree_TypeDefinitionIndex = 32293;

	class IndexTree : public ::NPA::Community::NXPToyGetCommunityResult
	{
	public:
		::System::Data::Index* _index; // 0x40

		::System::Void .ctor(::System::Data::Index* arg)
		{
			((::System::Void(*)(::System::Data::Index*, ::PVOID))((::PBYTE)hIl2Cpp + INDEXTREE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareNode(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INDEXTREE_COMPARENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareSateliteTreeNode(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INDEXTREE_COMPARESATELITETREENODE_OFFSET))(arg, arg, nullptr);
		}

	};

