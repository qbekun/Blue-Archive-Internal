#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UISmallParcelList;
class UIGrid;

#define UIACADEMYSCHEDULERESULT_ONBACK_OFFSET UNITYSDK_OFFSET(0x21E1880)
#define UIACADEMYSCHEDULERESULT_GET_THUMBNAILS_OFFSET UNITYSDK_OFFSET(0x21E18C0)
#define UIACADEMYSCHEDULERESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21E1980)
#define UIACADEMYSCHEDULERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E1A40)
#define UIACADEMYSCHEDULERESULT_GET_THUMBNAILGRID_OFFSET UNITYSDK_OFFSET(0x21E1A90)
#define UIACADEMYSCHEDULERESULT_GET_PARCELLIST_OFFSET UNITYSDK_OFFSET(0x21E1B50)
#define UIACADEMYSCHEDULERESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21E1C00)

	inline static constexpr unsigned int UIAcademyScheduleResult_TypeDefinitionIndex = 4229;

	class UIAcademyScheduleResult : public Il2CppObject
	{
	public:
		UILabel* zoneNameLabel; // 0xD8
		UILabel* studentEmptyLabel; // 0xE0
		::UnityEngine::GameObject* repeatCountRoot; // 0xE8
		UILabel* repeatCountLabel; // 0xF0
		UISmallParcelList* _parcelList; // 0xF8
		Il2CppObject* _thumbnailList; // 0x100
		UIGrid* _thumbnailGrid; // 0x108
		::System::String* zoneName; // 0x110
		Il2CppObject* vistorList; // 0x118
		Il2CppObject* rewardList; // 0x120
		Il2CppObject* extraRewardList; // 0x128
		Il2CppObject* repeatCount; // 0x130
		::System::Action* closeCallback; // 0x140

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_ONBACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_Thumbnails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_GET_THUMBNAILS_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Action* arg5)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_SETDATA_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_.CTOR_OFFSET))(nullptr);
		}

		UIGrid* get_ThumbnailGrid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_GET_THUMBNAILGRID_OFFSET))(nullptr);
		}

		UISmallParcelList* get_ParcelList()
		{
			return ((UISmallParcelList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_GET_PARCELLIST_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULERESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

