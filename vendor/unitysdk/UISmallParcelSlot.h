#pragma once
#include "unitysdk.h"

class UISmallParcelCard;
class UIScrollView;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UISMALLPARCELSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2347C60)
#define UISMALLPARCELSLOT_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x2347CA0)
#define UISMALLPARCELSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2347EB0)
#define UISMALLPARCELSLOT_GET_PARCELCARD_OFFSET UNITYSDK_OFFSET(0x2347E20)

	inline static constexpr unsigned int UISmallParcelSlot_TypeDefinitionIndex = 5005;

	class UISmallParcelSlot : public ::System::Xml::Serialization::XmlNodeEventArgs
	{
	public:
		UISmallParcelCard* parcelCard; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELSLOT_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		UISmallParcelCard* get_ParcelCard()
		{
			return ((UISmallParcelCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELSLOT_GET_PARCELCARD_OFFSET))(nullptr);
		}

	};

