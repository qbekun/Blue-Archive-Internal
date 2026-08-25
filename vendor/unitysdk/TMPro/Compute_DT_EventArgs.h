#pragma once
#include "../unitysdk.h"

namespace TMPro { class Compute_DistanceTransform_EventTypes; }

#define TMPRO_COMPUTE_DT_EVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11E910)
#define TMPRO_COMPUTE_DT_EVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11E940)

namespace TMPro
{
	inline static constexpr unsigned int Compute_DT_EventArgs_TypeDefinitionIndex = 33615;

	class Compute_DT_EventArgs : public Il2CppObject
	{
	public:
		::TMPro::Compute_DistanceTransform_EventTypes* EventType; // 0x10
		::System::Single ProgressPercentage; // 0x14
		::Il2CppArray<::System::Object*>* Colors; // 0x18

		::System::Void .ctor(::TMPro::Compute_DistanceTransform_EventTypes* arg, ::System::Single arg)
		{
			((::System::Void(*)(::TMPro::Compute_DistanceTransform_EventTypes*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COMPUTE_DT_EVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::TMPro::Compute_DistanceTransform_EventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::TMPro::Compute_DistanceTransform_EventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COMPUTE_DT_EVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

