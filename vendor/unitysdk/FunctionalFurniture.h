#pragma once
#include "unitysdk.h"

class FunctionalFurnitureBubble;
class FurnitureVisual;

#define FUNCTIONALFURNITURE_ONDEPLOYCONFIRMED_OFFSET UNITYSDK_OFFSET(0x1AC31E0)
#define FUNCTIONALFURNITURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC33A0)
#define FUNCTIONALFURNITURE_SETBUBBLEORDER_OFFSET UNITYSDK_OFFSET(0x1AC3440)
#define FUNCTIONALFURNITURE_GET_VISUAL_OFFSET UNITYSDK_OFFSET(0x1AC32E0)
#define FUNCTIONALFURNITURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AC34C0)
#define FUNCTIONALFURNITURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3550)
#define FUNCTIONALFURNITURE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC3560)
#define FUNCTIONALFURNITURE_SETACTIVEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1AC3B60)
#define FUNCTIONALFURNITURE_HIDEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1AC3BF0)
#define FUNCTIONALFURNITURE_CREATEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1AC3C60)

	inline static constexpr unsigned int FunctionalFurniture_TypeDefinitionIndex = 1394;

	class FunctionalFurniture : public Il2CppObject
	{
	public:
		FunctionalFurnitureBubble* bubbleInstance; // 0x18
		FurnitureVisual* visual; // 0x20

		::System::Void OnDeployConfirmed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_ONDEPLOYCONFIRMED_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetBubbleOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_SETBUBBLEORDER_OFFSET))(arg, nullptr);
		}

		FurnitureVisual* get_Visual()
		{
			return ((FurnitureVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_GET_VISUAL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void SetActiveBubble(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_SETACTIVEBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void HideBubble()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_HIDEBUBBLE_OFFSET))(nullptr);
		}

		::System::Void CreateBubble()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITURE_CREATEBUBBLE_OFFSET))(nullptr);
		}

	};

