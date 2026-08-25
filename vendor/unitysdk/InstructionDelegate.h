#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }

#define INSTRUCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x96102F0)
#define INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9610300)
#define INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9610310)
#define INSTRUCTIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9610340)

	inline static constexpr unsigned int InstructionDelegate_TypeDefinitionIndex = 35317;

	class InstructionDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRendererInstruction* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::SkeletonRendererInstruction*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

