#pragma once
#include "unitysdk.h"

class ClanMemberScrollController;
class ClanMemberObject;

#define CLANMEMBER_REFRESHCLANMEMBEROBJECT_OFFSET UNITYSDK_OFFSET(0x2335110)
#define CLANMEMBER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23353D0)
#define CLANMEMBER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2335CB0)
#define CLANMEMBER_REFRESHCLANSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x23353E0)
#define CLANMEMBER_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2335360)
#define CLANMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2335CC0)

	inline static constexpr unsigned int ClanMember_TypeDefinitionIndex = 4957;

	class ClanMember : public Il2CppObject
	{
	public:
		ClanMemberScrollController* controller; // 0x18
		Il2CppObject* clanMemberList; // 0x20

		::System::Void RefreshClanMemberObject(::System::Int32 arg, ClanMemberObject* arg2)
		{
			((::System::Void(*)(::System::Int32, ClanMemberObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_REFRESHCLANMEMBEROBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshClanScrollItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_REFRESHCLANSCROLLITEMS_OFFSET))(nullptr);
		}

		ClanMemberScrollController* get_scrollController()
		{
			return ((ClanMemberScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBER_.CTOR_OFFSET))(nullptr);
		}

	};

