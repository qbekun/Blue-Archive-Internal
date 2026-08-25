#pragma once
#include "unitysdk.h"

class IntTabController;
namespace UnityEngine { class Animation; }
class UILabel;
class UISlider;
class UISprite;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class ConquestData; }
namespace MX::Data { class LocalizeData; }
namespace MX::Data::Excel { class ConquestEventExcel; }
namespace MX::Data { class ConquestErosionExcelData; }
namespace UnityEngine { class Color; }
class ConquestContentObject;

#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2447150)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETCONTROLLERUIINFO_OFFSET UNITYSDK_OFFSET(0x24471A0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_GET_CONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x24476A0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_.CTOR_OFFSET UNITYSDK_OFFSET(0x24489C0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETRIGHTBOXLOCALIZE_OFFSET UNITYSDK_OFFSET(0x2448A50)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_UPDATE_OFFSET UNITYSDK_OFFSET(0x2448B60)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_ONSTEPTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2448EE0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETRIGHTBOXUI_OFFSET UNITYSDK_OFFSET(0x2447720)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24490C0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822__VALIDATEANDSETSAVEDATA_G__SETDEFAULTDATA|43_0_OFFSET UNITYSDK_OFFSET(0x244A4A0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_VALIDATEANDSETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2449DD0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETTABSTATE_OFFSET UNITYSDK_OFFSET(0x24497B0)

	inline static constexpr unsigned int UIEventLobbyContentController_Conquest_822_TypeDefinitionIndex = 5543;

	class UIEventLobbyContentController_Conquest_822 : public Il2CppObject
	{
	public:
		IntTabController* stepTabController; // 0x50
		::UnityEngine::Animation* openAni; // 0x58
		::Il2CppArray<::System::Object*>* groundObjectTransforms; // 0x60
		::Il2CppArray<::System::Object*>* rightBoxTransforms; // 0x68
		::Il2CppArray<::System::Object*>* conditionCheckBoxes; // 0x70
		::Il2CppArray<::System::Object*>* conditionLabels; // 0x78
		::Il2CppArray<::System::Object*>* stepTabCover; // 0x80
		::Il2CppArray<::System::Object*>* stepTabErosionBg1; // 0x88
		::Il2CppArray<::System::Object*>* stepTabErosionBg2; // 0x90
		::Il2CppArray<::System::Object*>* stepTabLabelOn; // 0x98
		::Il2CppArray<::System::Object*>* stepTabLabelOff; // 0xA0
		UILabel* stepNameLabel; // 0xA8
		UILabel* stepNumLabel; // 0xB0
		UILabel* percentLabel; // 0xB8
		UILabel* conquerAchievementRate; // 0xC0
		UISlider* conquerAchievementRateGauge; // 0xC8
		UISprite* completeSprite; // 0xD0
		UILabel* waiting; // 0xD8
		UILabel* remainTime; // 0xE0
		UILabel* remainApToUse; // 0xE8
		UILabel* engineStateLabel; // 0xF0
		UILabel* targetName; // 0xF8
		UILabel* erosionLabel; // 0x100
		UILabel* removeCompleteLabel; // 0x108
		::Il2CppArray<::System::Object*>* panelBackgroundFX; // 0x110
		Il2CppObject* currentViewingStepDict; // 0x118
		::System::Int32 currentSelectedTabIndex; // 0x120
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x128
		::System::Boolean openEnter; // 0x130
		::MX::Data::ConquestData* conquestData; // 0x138
		::MX::Data::LocalizeData* localData; // 0x140
		::MX::Data::Excel::ConquestEventExcel* eventExcel; // 0x148
		::MX::Data::ConquestErosionExcelData* conquestErosionExcelData; // 0x158
		::System::String* localizeErosion; // 0x160
		::System::String* localizeStep; // 0x168
		::System::DateTime* openDate; // 0x170
		::UnityEngine::Color* purple; // 0x178
		::UnityEngine::Color* grey; // 0x188

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetControllerUIInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETCONTROLLERUIINFO_OFFSET))(nullptr);
		}

		ConquestContentObject* get_conquestObject()
		{
			return ((ConquestContentObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_GET_CONQUESTOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRightBoxLocalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETRIGHTBOXLOCALIZE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnStepTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_ONSTEPTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRightBoxUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETRIGHTBOXUI_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void _ValidateAndSetSaveData_g__SetDefaultData|43_0(<>c__DisplayClass43_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass43_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822__VALIDATEANDSETSAVEDATA_G__SETDEFAULTDATA|43_0_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateAndSetSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_VALIDATEANDSETSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void SetTabState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_822_SETTABSTATE_OFFSET))(nullptr);
		}

	};

