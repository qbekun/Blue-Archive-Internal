#pragma once
#include "unitysdk.h"

class UIWidget;
class UIScrollView;
namespace MX::Data { class GuideMissionSeasonInfo; }

#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_MOVETO_OFFSET UNITYSDK_OFFSET(0x25C9590)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25C9BA0)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_INITTABOBJECTS_OFFSET UNITYSDK_OFFSET(0x25C9BE0)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_REFRESHTABS_OFFSET UNITYSDK_OFFSET(0x25C9E90)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x25CA450)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x25CA460)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x25CA470)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_REFRESHOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x25C9F70)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x25C9B30)
#define UIGUIDEMISSIONSCENARIOTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CA680)

	inline static constexpr unsigned int UIGuideMissionScenarioTabController_TypeDefinitionIndex = 6327;

	class UIGuideMissionScenarioTabController : public AxisType
	{
	public:
		::Il2CppArray<::System::Object*>* conditions; // 0x58
		UIWidget* openConditionSizeWrapper; // 0x60
		UIScrollView* missionScroll; // 0x68
		UIScrollView* _scrollView; // 0x70
		::MX::Data::GuideMissionSeasonInfo* _seasonInfo_k__BackingField; // 0x78
		Il2CppObject* defaultConditionSize; // 0x80
		::System::Int64 numTabs; // 0x88

		::System::Void MoveTo(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_MOVETO_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitTabObjects(::MX::Data::GuideMissionSeasonInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_INITTABOBJECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_REFRESHTABS_OFFSET))(nullptr);
		}

		::System::Void set_seasonInfo(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_seasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshOpenCondition(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_REFRESHOPENCONDITION_OFFSET))(arg, nullptr);
		}

		UIScrollView* get_scrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

