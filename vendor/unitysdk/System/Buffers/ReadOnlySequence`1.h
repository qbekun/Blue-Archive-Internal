#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_ISSINGLESEGMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_FIRSTSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGETBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTBUFFERSLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTSPANSLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SEEKMULTISEGMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETSEQUENCETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICEIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICEIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence`1_TypeDefinitionIndex = 25206;

	class ReadOnlySequence`1 : public Il2CppObject
	{
	public:
		::System::Object* _startObject; // 0x0
		::System::Object* _endObject; // 0x0
		::System::Int32 _startInteger; // 0x0
		::System::Int32 _endInteger; // 0x0
		Il2CppObject* Empty; // 0x0

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSingleSegment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_ISSINGLESEGMENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_First()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_FIRST_OFFSET))(nullptr);
		}

		Il2CppObject* get_FirstSpan()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_FIRSTSPAN_OFFSET))(nullptr);
		}

		::System::SequencePosition* get_Start()
		{
			return (return (::System::SequencePosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GET_START_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Slice(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Slice(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Slice(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGet(::System::SequencePosition&* arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::SequencePosition&*, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetBuffer(::System::SequencePosition&* arg, Il2CppObject&* arg, ::System::SequencePosition&* arg)
		{
			return (return (::System::Boolean(*)(::System::SequencePosition&*, Il2CppObject&*, ::System::SequencePosition&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGETBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetFirstBuffer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTBUFFER_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstBufferSlow(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTBUFFERSLOW_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFirstSpan()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTSPAN_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstSpanSlow(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETFIRSTSPANSLOW_OFFSET))(arg, arg, nullptr);
		}

		::System::SequencePosition* Seek(::System::Int64 arg, ::System::ExceptionArgument* arg)
		{
			return (return (::System::SequencePosition*(*)(::System::Int64, ::System::ExceptionArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::SequencePosition* SeekMultiSegment(Il2CppObject* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::ExceptionArgument* arg)
		{
			return (return (::System::SequencePosition*(*)(Il2CppObject*, ::System::Object*, ::System::Int32, ::System::Int64, ::System::ExceptionArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SEEKMULTISEGMENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::SequencePosition* GetEndPosition(Il2CppObject* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Object* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::SequencePosition*(*)(Il2CppObject*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETENDPOSITION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSequenceType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETSEQUENCETYPE_OFFSET))(nullptr);
		}

		::System::Int32 GetIndex(::System::SequencePosition&* arg)
		{
			return (return (::System::Int32(*)(::System::SequencePosition&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SliceImpl(::System::SequencePosition&* arg, ::System::SequencePosition&* arg)
		{
			return (return (Il2CppObject*(*)(::System::SequencePosition&*, ::System::SequencePosition&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICEIMPL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SliceImpl(::System::SequencePosition&* arg)
		{
			return (return (Il2CppObject*(*)(::System::SequencePosition&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_SLICEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_GETLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetString(::System::String&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_TRYGETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

