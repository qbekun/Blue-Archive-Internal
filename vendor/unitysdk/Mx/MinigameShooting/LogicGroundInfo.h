#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146A390)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_ROTDIC_OFFSET UNITYSDK_OFFSET(0x146A8C0)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_SECTIONDATA_OFFSET UNITYSDK_OFFSET(0x146A8D0)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_SECTIONDATA_OFFSET UNITYSDK_OFFSET(0x146A8E0)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_OBSTACLEDIC_OFFSET UNITYSDK_OFFSET(0x146A8F0)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x146A900)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x146AD30)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_ROTDIC_OFFSET UNITYSDK_OFFSET(0x146AD40)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_OBSTACLEDIC_OFFSET UNITYSDK_OFFSET(0x146AD50)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x146A7A0)
#define MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146AD60)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int LogicGroundInfo_TypeDefinitionIndex = 15113;

	class LogicGroundInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _SectionData_k__BackingField; // 0x10
		Il2CppObject* _ObstacleDic_k__BackingField; // 0x18
		Il2CppObject* _RotDic_k__BackingField; // 0x20

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::LogicGroundInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::LogicGroundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_RotDic(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_ROTDIC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SectionData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_SECTIONDATA_OFFSET))(nullptr);
		}

		::System::Void set_SectionData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_SECTIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_ObstacleDic(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SET_OBSTACLEDIC_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_RotDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_ROTDIC_OFFSET))(nullptr);
		}

		Il2CppObject* get_ObstacleDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_GET_OBSTACLEDIC_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::LogicGroundInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::LogicGroundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICGROUNDINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

