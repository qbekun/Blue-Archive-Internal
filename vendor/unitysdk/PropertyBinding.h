#pragma once
#include "unitysdk.h"

class PropertyReference;
class Direction;
class UpdateCondition;

#define PROPERTYBINDING_START_OFFSET UNITYSDK_OFFSET(0x1F45890)
#define PROPERTYBINDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F45B10)
#define PROPERTYBINDING_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x1F458C0)
#define PROPERTYBINDING_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F46220)
#define PROPERTYBINDING_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F462E0)
#define PROPERTYBINDING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F462F0)
#define PROPERTYBINDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F46300)

	inline static constexpr unsigned int PropertyBinding_TypeDefinitionIndex = 119;

	class PropertyBinding : public Il2CppObject
	{
	public:
		PropertyReference* source; // 0x18
		PropertyReference* target; // 0x20
		Direction* direction; // 0x28
		UpdateCondition* update; // 0x2C
		::System::Boolean editMode; // 0x30
		::System::Object* mLastValue; // 0x38

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_UPDATETARGET_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYBINDING_.CTOR_OFFSET))(nullptr);
		}

	};

