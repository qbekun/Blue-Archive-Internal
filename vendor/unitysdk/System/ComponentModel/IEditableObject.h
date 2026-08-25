#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IEditableObject_TypeDefinitionIndex = 29474;

	class IEditableObject : public Il2CppObject
	{
	public:
		::System::Void BeginEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_BEGINEDIT_OFFSET))(nullptr);
		}

		::System::Void EndEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_ENDEDIT_OFFSET))(nullptr);
		}

		::System::Void CancelEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IEDITABLEOBJECT_CANCELEDIT_OFFSET))(nullptr);
		}

	};
}

