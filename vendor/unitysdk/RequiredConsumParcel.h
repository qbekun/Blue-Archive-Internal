#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define REQUIREDCONSUMPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0x277EE30)
#define REQUIREDCONSUMPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2780120)

	inline static constexpr unsigned int RequiredConsumParcel_TypeDefinitionIndex = 7377;

	class RequiredConsumParcel : public Il2CppObject
	{
	public:
		UILabel* hasValueLabel; // 0x18
		UISprite* iconSprite; // 0x20
		UILabel* consumeValueLabel; // 0x28

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + REQUIREDCONSUMPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUIREDCONSUMPARCEL_.CTOR_OFFSET))(nullptr);
		}

	};

