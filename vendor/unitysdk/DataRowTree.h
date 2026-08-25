#pragma once
#include "unitysdk.h"

#define DATAROWTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9742FE0)
#define DATAROWTREE_COMPARENODE_OFFSET UNITYSDK_OFFSET(0x97436C0)
#define DATAROWTREE_COMPARESATELITETREENODE_OFFSET UNITYSDK_OFFSET(0x97436F0)

	inline static constexpr unsigned int DataRowTree_TypeDefinitionIndex = 32218;

	class DataRowTree : public ::NPA::Community::NXPToyCommunityAlarmInfoResult
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAROWTREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 CompareNode(::System::Data::DataRow* arg, ::System::Data::DataRow* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataRow*, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + DATAROWTREE_COMPARENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareSateliteTreeNode(::System::Data::DataRow* arg, ::System::Data::DataRow* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataRow*, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + DATAROWTREE_COMPARESATELITETREENODE_OFFSET))(arg, arg, nullptr);
		}

	};

