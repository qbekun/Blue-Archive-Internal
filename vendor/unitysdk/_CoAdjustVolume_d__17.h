#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }

#define <COADJUSTVOLUME>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D44B50)
#define <COADJUSTVOLUME>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D44C60)
#define <COADJUSTVOLUME>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D44C70)
#define <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D44DC0)
#define <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D44DD0)
#define <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D44E20)

	inline static constexpr unsigned int <CoAdjustVolume>d__17_TypeDefinitionIndex = 20137;

	class <CoAdjustVolume>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single fromVol; // 0x20
		::System::Single toVol; // 0x24
		::System::Single duration; // 0x28
		::UnityEngine::AudioSource* source; // 0x30
		::System::Action* onFinish; // 0x38
		::System::Single _startTime_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTVOLUME>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

