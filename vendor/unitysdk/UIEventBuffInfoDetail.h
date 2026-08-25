#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
class MXButton;
class UIScrollView;
class UIGrid;
class UIEventBuffDetailItem;
namespace MX::Data { class EventContentBuffData; }

#define UIEVENTBUFFINFODETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x241D080)
#define UIEVENTBUFFINFODETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x241D250)
#define UIEVENTBUFFINFODETAIL_GETBUFFCONDITIONCHARACTERS_OFFSET UNITYSDK_OFFSET(0x241E070)
#define UIEVENTBUFFINFODETAIL_ONOPENED_OFFSET UNITYSDK_OFFSET(0x241F9F0)
#define UIEVENTBUFFINFODETAIL_NAMESORTLIST_OFFSET UNITYSDK_OFFSET(0x241F170)
#define UIEVENTBUFFINFODETAIL_ADDBUFFDETAILITEMPREFAB_OFFSET UNITYSDK_OFFSET(0x241F290)
#define UIEVENTBUFFINFODETAIL_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x241FB20)
#define UIEVENTBUFFINFODETAIL_SETBUFFCHARACTERLISTDATA_OFFSET UNITYSDK_OFFSET(0x241F430)
#define UIEVENTBUFFINFODETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x241FB40)

	inline static constexpr unsigned int UIEventBuffInfoDetail_TypeDefinitionIndex = 5499;

	class UIEventBuffInfoDetail : public Il2CppObject
	{
	public:
		UISprite* buffIcon; // 0xD8
		UILabel* buffInfo; // 0xE0
		MXButton* closeButton; // 0xE8
		UIScrollView* eventBuffDetailListScrollView; // 0xF0
		UIGrid* eventBuffDetailListGrid; // 0xF8
		UIEventBuffDetailItem* eventBuffDetailListItemPrefab; // 0x100
		Il2CppObject* eventBuffDetailList; // 0x108
		Il2CppObject* buffCharacterList; // 0x110
		Il2CppObject* possesionCharacterList; // 0x118
		Il2CppObject* notHeldCharacterList; // 0x120
		::MX::Data::EventContentBuffData* buffData; // 0x128

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::EventContentBuffData* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentBuffData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBuffConditionCharacters(::MX::Data::EventContentBuffData* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::EventContentBuffData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_GETBUFFCONDITIONCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void NameSortList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_NAMESORTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void AddBuffDetailItemPrefab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_ADDBUFFDETAILITEMPREFAB_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetBuffCharacterListData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_SETBUFFCHARACTERLISTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFODETAIL_.CTOR_OFFSET))(nullptr);
		}

	};

