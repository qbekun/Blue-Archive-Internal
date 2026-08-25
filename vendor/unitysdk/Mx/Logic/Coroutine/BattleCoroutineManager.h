#pragma once
#include "../../../unitysdk.h"

class CoroutineInfo;
namespace MX::Logic::Coroutine { class BattleCoroutineManager; }

#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423C50)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1423D00)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x141E3E0)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER__UPDATE_B__12_1_OFFSET UNITYSDK_OFFSET(0x1423E80)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_GET_SECONDPERFRAME_OFFSET UNITYSDK_OFFSET(0x1423ED0)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1423EE0)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_SET_SECONDPERFRAME_OFFSET UNITYSDK_OFFSET(0x1424590)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14245A0)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER__LATEUPDATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1424E80)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1424ED0)
#define MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1424F20)

namespace MX::Logic::Coroutine
{
	inline static constexpr unsigned int BattleCoroutineManager_TypeDefinitionIndex = 14825;

	class BattleCoroutineManager : public Il2CppObject
	{
	public:
		Il2CppObject* coroutineList; // 0x10
		Il2CppObject* removeList; // 0x18
		::System::TimeSpan* _SecondPerFrame_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void StopCoroutine(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_STOPCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void StartCoroutine(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_STARTCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Update_b__12_1(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER__UPDATE_B__12_1_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_SecondPerFrame()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_GET_SECONDPERFRAME_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_SecondPerFrame(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_SET_SECONDPERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean _LateUpdate_b__13_0(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER__LATEUPDATE_B__13_0_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Coroutine::BattleCoroutineManager* get_Instance()
		{
			return ((::MX::Logic::Coroutine::BattleCoroutineManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_BATTLECOROUTINEMANAGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

