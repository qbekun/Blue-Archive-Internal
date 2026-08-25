#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UCSectionSetting; }

#define MXUNDERCOVER_UCENTITYCOLLECTION_GETENTITIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD91E30)
#define MXUNDERCOVER_UCENTITYCOLLECTION_GET_PLAINENTITIES_OFFSET UNITYSDK_OFFSET(0xD91E40)
#define MXUNDERCOVER_UCENTITYCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0xD91E80)
#define MXUNDERCOVER_UCENTITYCOLLECTION_GET_NPCS_OFFSET UNITYSDK_OFFSET(0xD91EE0)
#define MXUNDERCOVER_UCENTITYCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0xD91F20)
#define MXUNDERCOVER_UCENTITYCOLLECTION_GET_PROPS_OFFSET UNITYSDK_OFFSET(0xD91F70)
#define MXUNDERCOVER_UCENTITYCOLLECTION_GET_STARTPOINTS_OFFSET UNITYSDK_OFFSET(0xD91FB0)
#define MXUNDERCOVER_UCENTITYCOLLECTION_FINDENTERSECTIONPOINT_OFFSET UNITYSDK_OFFSET(0xD91FF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityCollection_TypeDefinitionIndex = 9716;

	class UCEntityCollection : public Il2CppObject
	{
	public:
		Il2CppObject* Entities; // 0x10

		Il2CppObject* GetEntities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_GETENTITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlainEntities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_GET_PLAINENTITIES_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* get_NPCs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_GET_NPCS_OFFSET))(nullptr);
		}

		::System::Void AddRange(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_ADDRANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Props()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_GET_PROPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StartPoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_GET_STARTPOINTS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* FindEnterSectionPoint(::MXUnderCover::UCSectionSetting* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::MXUnderCover::UCSectionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOLLECTION_FINDENTERSECTIONPOINT_OFFSET))(arg, nullptr);
		}

	};
}

