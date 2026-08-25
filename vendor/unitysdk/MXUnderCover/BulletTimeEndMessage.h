#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class SkillUseParameter; }

#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_SKILLUSEPARAMETER_OFFSET UNITYSDK_OFFSET(0xDBFC70)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_SKILLUSEPARAMETER_OFFSET UNITYSDK_OFFSET(0xDBFC80)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xDBFC90)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_ISCANCEL_OFFSET UNITYSDK_OFFSET(0xDBFCA0)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBED70)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_ISCANCEL_OFFSET UNITYSDK_OFFSET(0xDBFCB0)
#define MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_SENDER_OFFSET UNITYSDK_OFFSET(0xDBFCC0)

namespace MXUnderCover
{
	inline static constexpr unsigned int BulletTimeEndMessage_TypeDefinitionIndex = 10012;

	class BulletTimeEndMessage : public Il2CppObject
	{
	public:
		::System::Object* _Sender_k__BackingField; // 0x10
		::System::Boolean _IsCancel_k__BackingField; // 0x18
		::MXUnderCover::SkillUseParameter* _SkillUseParameter_k__BackingField; // 0x20

		::MXUnderCover::SkillUseParameter* get_SkillUseParameter()
		{
			return ((::MXUnderCover::SkillUseParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_SKILLUSEPARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_SkillUseParameter(::MXUnderCover::SkillUseParameter* arg)
		{
			((::System::Void(*)(::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_SKILLUSEPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Sender()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_SENDER_OFFSET))(nullptr);
		}

		::System::Void set_IsCancel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_ISCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg2, ::MXUnderCover::SkillUseParameter* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_GET_ISCANCEL_OFFSET))(nullptr);
		}

		::System::Void set_Sender(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMEENDMESSAGE_SET_SENDER_OFFSET))(arg, nullptr);
		}

	};
}

