#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UICAFESTUDENTINVITENAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x228AEE0)
#define UICAFESTUDENTINVITENAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x228AF70)
#define UICAFESTUDENTINVITENAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x228B370)

	inline static constexpr unsigned int UICafeStudentInviteNameSearch_TypeDefinitionIndex = 4687;

	class UICafeStudentInviteNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITENAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITENAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITENAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

	};

