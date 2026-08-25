#pragma once
#include "unitysdk.h"

class FriendBlockListType;

#define UIFRIENDAPPLICANTLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x257B220)
#define UIFRIENDAPPLICANTLISTCONTROLLER_GET_LISTTYPE_OFFSET UNITYSDK_OFFSET(0x257B260)
#define UIFRIENDAPPLICANTLISTCONTROLLER_SET_LISTTYPE_OFFSET UNITYSDK_OFFSET(0x257B270)

	inline static constexpr unsigned int UIFriendApplicantListController_TypeDefinitionIndex = 6188;

	class UIFriendApplicantListController : public ::System::Xml::XmlCDataSection
	{
	public:
		FriendBlockListType* _ListType_k__BackingField; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANTLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		FriendBlockListType* get_ListType()
		{
			return ((FriendBlockListType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANTLISTCONTROLLER_GET_LISTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ListType(FriendBlockListType* arg)
		{
			((::System::Void(*)(FriendBlockListType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANTLISTCONTROLLER_SET_LISTTYPE_OFFSET))(arg, nullptr);
		}

	};

