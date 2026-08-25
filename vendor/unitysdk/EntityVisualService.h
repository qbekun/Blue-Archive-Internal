#pragma once
#include "unitysdk.h"

class ShaderPresetData;
class ShaderBaseAnimationData;
class IHighlitable;

#define ENTITYVISUALSERVICE_GET_DEATHSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6D50)
#define ENTITYVISUALSERVICE_GET_HITSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6D90)
#define ENTITYVISUALSERVICE_GET_DESTROYSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6DD0)
#define ENTITYVISUALSERVICE_SET_DEATHSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6E10)
#define ENTITYVISUALSERVICE_SET_HITSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6E60)
#define ENTITYVISUALSERVICE_SET_DESTROYSHADERANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1FC6EB0)
#define ENTITYVISUALSERVICE_GET_INSKILLRANGESHADERDATA_OFFSET UNITYSDK_OFFSET(0x1FC6F00)
#define ENTITYVISUALSERVICE_SET_INSKILLRANGESHADERDATA_OFFSET UNITYSDK_OFFSET(0x1FC6F40)
#define ENTITYVISUALSERVICE_GET_SELECTSKILLTARTGETSHADERDATA_OFFSET UNITYSDK_OFFSET(0x1FC6F90)
#define ENTITYVISUALSERVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC6FD0)
#define ENTITYVISUALSERVICE_ONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1FC7220)
#define ENTITYVISUALSERVICE_OFFHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1FC73B0)
#define ENTITYVISUALSERVICE_MAKEHIGHLIGHTINFO_OFFSET UNITYSDK_OFFSET(0x1FC7810)
#define ENTITYVISUALSERVICE_SET_SELECTSKILLTARTGETSHADERDATA_OFFSET UNITYSDK_OFFSET(0x1FC7BC0)

	inline static constexpr unsigned int EntityVisualService_TypeDefinitionIndex = 2972;

	class EntityVisualService : public Il2CppObject
	{
	public:
		ShaderPresetData* _SelectSkillTartgetShaderData_k__BackingField; // 0x0
		ShaderPresetData* _InSkillRangeShaderData_k__BackingField; // 0x8
		ShaderBaseAnimationData* _HitShaderAnimationData_k__BackingField; // 0x10
		ShaderBaseAnimationData* _DeathShaderAnimationData_k__BackingField; // 0x18
		ShaderBaseAnimationData* _DestroyShaderAnimationData_k__BackingField; // 0x20

		ShaderBaseAnimationData* get_DeathShaderAnimationData()
		{
			return ((ShaderBaseAnimationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_GET_DEATHSHADERANIMATIONDATA_OFFSET))(nullptr);
		}

		ShaderBaseAnimationData* get_HitShaderAnimationData()
		{
			return ((ShaderBaseAnimationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_GET_HITSHADERANIMATIONDATA_OFFSET))(nullptr);
		}

		ShaderBaseAnimationData* get_DestroyShaderAnimationData()
		{
			return ((ShaderBaseAnimationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_GET_DESTROYSHADERANIMATIONDATA_OFFSET))(nullptr);
		}

		::System::Void set_DeathShaderAnimationData(ShaderBaseAnimationData* arg)
		{
			((::System::Void(*)(ShaderBaseAnimationData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_SET_DEATHSHADERANIMATIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_HitShaderAnimationData(ShaderBaseAnimationData* arg)
		{
			((::System::Void(*)(ShaderBaseAnimationData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_SET_HITSHADERANIMATIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestroyShaderAnimationData(ShaderBaseAnimationData* arg)
		{
			((::System::Void(*)(ShaderBaseAnimationData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_SET_DESTROYSHADERANIMATIONDATA_OFFSET))(arg, nullptr);
		}

		ShaderPresetData* get_InSkillRangeShaderData()
		{
			return ((ShaderPresetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_GET_INSKILLRANGESHADERDATA_OFFSET))(nullptr);
		}

		::System::Void set_InSkillRangeShaderData(ShaderPresetData* arg)
		{
			((::System::Void(*)(ShaderPresetData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_SET_INSKILLRANGESHADERDATA_OFFSET))(arg, nullptr);
		}

		ShaderPresetData* get_SelectSkillTartgetShaderData()
		{
			return ((ShaderPresetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_GET_SELECTSKILLTARTGETSHADERDATA_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnHighlight(IHighlitable* arg, ShaderPresetData* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(IHighlitable*, ShaderPresetData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_ONHIGHLIGHT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OffHighlight(IHighlitable* arg)
		{
			((::System::Void(*)(IHighlitable*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_OFFHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MakeHighlightInfo(Il2CppObject* arg, ShaderPresetData* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ShaderPresetData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_MAKEHIGHLIGHTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SelectSkillTartgetShaderData(ShaderPresetData* arg)
		{
			((::System::Void(*)(ShaderPresetData*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALSERVICE_SET_SELECTSKILLTARTGETSHADERDATA_OFFSET))(arg, nullptr);
		}

	};

