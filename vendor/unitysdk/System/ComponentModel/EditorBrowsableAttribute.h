#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1D6D0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1D6F0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9B1D710)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1D720)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1D780)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableAttribute_TypeDefinitionIndex = 29316;

	class EditorBrowsableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::EditorBrowsableState* browsableState; // 0x10

		::System::Void .ctor(::System::ComponentModel::EditorBrowsableState* arg)
		{
			((::System::Void(*)(::System::ComponentModel::EditorBrowsableState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::EditorBrowsableState* get_State()
		{
			return (return (::System::ComponentModel::EditorBrowsableState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

