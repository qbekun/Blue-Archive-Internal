#pragma once
#include "unitysdk.h"

class Phase;
namespace UnityEngine { class Vector3; }

#define POINTERCOMMON_GET_MOUSEID_OFFSET UNITYSDK_OFFSET(0x2199BF0)
#define POINTERCOMMON_GETPHASEFROMTOUCH_OFFSET UNITYSDK_OFFSET(0x2199C00)
#define POINTERCOMMON_FORALLPOINTERS_OFFSET UNITYSDK_OFFSET(0x2199C70)
#define POINTERCOMMON_GETPHASEFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x219A130)
#define POINTERCOMMON__FORALLPOINTERS_G__TONGUIPOSITION|3_0_OFFSET UNITYSDK_OFFSET(0x2199FE0)

	inline static constexpr unsigned int PointerCommon_TypeDefinitionIndex = 4131;

	class PointerCommon : public Il2CppObject
	{
	public:
		::System::Int32 get_MouseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTERCOMMON_GET_MOUSEID_OFFSET))(nullptr);
		}

		Phase* GetPhaseFromTouch(::UnityEngine::Touch&* arg)
		{
			return ((Phase*(*)(::UnityEngine::Touch&*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERCOMMON_GETPHASEFROMTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void ForAllPointers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERCOMMON_FORALLPOINTERS_OFFSET))(arg, nullptr);
		}

		Phase* GetPhaseFromMouse()
		{
			return ((Phase*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTERCOMMON_GETPHASEFROMMOUSE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* _ForAllPointers_g__ToNGUIPosition|3_0(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERCOMMON__FORALLPOINTERS_G__TONGUIPOSITION|3_0_OFFSET))(arg, nullptr);
		}

	};

